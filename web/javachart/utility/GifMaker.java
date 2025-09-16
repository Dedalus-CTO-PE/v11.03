package javachart.utility;

import java.awt.*;
import java.awt.image.*;
import java.io.*;

/*
 *	GifMaker provides a convenience class for creating and managing GIF
 *	images streams.  
 */
public class GifMaker {
	OutputStream	myOutputStream;
	Image		myImage;
	byte		byteArray[];
	int		bytesInArray;
	Component	myProgressBar;

/**
 *	Constructs a default GifMaker, with image and output stream set to null
 */
	public GifMaker(){
		this(null, null);
	}

/**
 *	Constructs a GifMaker with the specified output stream and image.
 */
	public GifMaker(OutputStream 	outputStream,
				Image 		image){
		setOutputStream(outputStream);
		setImage(image);
	}

//Access methods
/**
 *	Sets or resets the Image you wish to convert into GIF format.
 */
	public void setImage(Image image){
		myImage = image;
		bytesInArray = 0;
	}
/**
 *	Returns this GifMaker's Image
 */
	public Image	getImage(){
		return myImage;
	}
/**
 *	Sets an OutputStream for use with this GifMaker
 */
	public void setOutputStream(OutputStream outputStream){
		myOutputStream = outputStream;
	}
/**
 *	Returns this GifMaker's OutputStream
 */
	public OutputStream getOutputStream(){
		return myOutputStream;
	}
/**
 *	Installs a Component that will be used to paint a simple progress bar.
 *	If this is not installed, no progress bar will display while GifMaker
 *	generates and compresses its image data.
 */
	public void setProgressBar(Component p){
		myProgressBar = p;
	}
/**
 *	Writes a GIF data stream to this GifMaker's OutputStream.
 */
	public void write() throws java.io.IOException {
		if(myOutputStream == null){
			System.out.println("no OutputStream");
			return;
		}
		if(myImage == null){
			System.out.println("no Image");
			return;
		}
		if (bytesInArray == 0){
			System.out.println("rasterizing Image");
			generate();
		}
		System.out.println("writing " + bytesInArray + " bytes");
	    	myOutputStream.write(byteArray, 0, bytesInArray);
	    	myOutputStream.flush();
	}

/**
 *	Returns the size, in bytes, of this GifMaker's GIF data
 */
	public int getSize(){
		if(myImage == null) return 0;
		if(bytesInArray == 0)
			generate();
		return bytesInArray;
	}

/**
 *	Returns the GIF data
 */
	public byte [] getByteArray(){
		if(myImage == null) return (byte []) null;
		if(bytesInArray == 0)
			generate();
		//return a correct size array
		byte [] newBytes = new byte[bytesInArray];
		for(int i=0;i<bytesInArray;i++)
			newBytes[i] = byteArray[i];
		return newBytes;
	}

/**
 *	Generates GIF data from this class' Image
 */
	public void generate(){
		if(myImage == null)
			return;
		save(myImage);
	}

/****GIF code follows ***/
        static final int RMASK      =0xe0;
        static final int RSHIFT     =0;
        static final int GMASK      =0xe0;
        static final int GSHIFT     =  3;
        static final int BMASK      = 0xc0;
        static final int BSHIFT     =   6;
	
        private void dither(
                int[] p32,      /* input:  image pixels in RGBA format */
                int[] p8,       /* output: image pixels in index format */
                int[] rmap,     /* output: color map */
                int[] gmap,
                int[] bmap,
                int w,          /* input:  image size */
                int h)
        {
                int ip=0, op=0;
                int[] thisline;
                int[] nextline;
                int[] tmpptr;
                int thisptr;
                int nextptr;
                int i, j, val, pwide3;
                int r1, g1, b1;
                int imax, jmax;
 
                pwide3=w*3;
                imax=h-1;
                jmax=w-1;

		/* load up colormap */
                for (i=0; i<256; i++)
                {
                        rmap[i] = (((i<<RSHIFT) & RMASK) * 255 + RMASK/2) / RMASK;
                        gmap[i] = (((i<<GSHIFT) & GMASK) * 255 + GMASK/2) / GMASK;
                        bmap[i] = (((i<<BSHIFT) & BMASK) * 255 + BMASK/2) / BMASK;
                }
 
                thisline = new int[pwide3];
                nextline = new int[pwide3];
 
                /* get first line of picture */
                for (j=0; j<pwide3; j+=3)
                {
                        nextline[j+0] = (p32[ip]&0x00ff0000)>>16;
                        nextline[j+1] = (p32[ip]&0x0000ff00)>>8;
                        nextline[j+2] = (p32[ip]&0x000000ff);
                        ip++;
                }

		for (i=0; i<h; i++) {
			if((i%100)==0) //don't need super fine grain update here
				progressBar("Dithering Image", h, i, Color.blue);
                        tmpptr = thisline;  thisline = nextline;  nextline = tmpptr;   /* swap */
 
                        /* get next line */
                        if (i!=imax)
                                for (j=0; j<pwide3; j+=3)
                                {
                                        nextline[j+0] = (p32[ip]&0x00ff0000)>>16;
                                        nextline[j+1] = (p32[ip]&0x0000ff00)>>8;
                                        nextline[j+2] = (p32[ip]&0x000000ff);
                                        ip++;
                                }

			for (j=0, thisptr=0, nextptr=0; j<w; j++)
                        {
                                r1 = thisline[thisptr++];
                                g1 = thisline[thisptr++];
                                b1 = thisline[thisptr++];
                                if (r1<0) r1=0; if (r1>255) r1=255;
                                if (g1<0) g1=0; if (g1>255) g1=255;
                                if (b1<0) b1=0; if (b1>255) b1=255;
 
                                /* choose actual pixel value */
                                val = (((r1&RMASK)>>RSHIFT) | ((g1&GMASK)>>GSHIFT) | ((b1&BMASK)>>BSHIFT));
                                p8[op] = val;
                                op++;
 
                                /* compute color errors */
                                r1 -= rmap[val];
                                g1 -= gmap[val];
                                b1 -= bmap[val];
 
                                /* Add fractions of errors to adjacent pixels */
                                if (j!=jmax) {  /* adjust RIGHT pixel */
                                        thisline[thisptr+0] += (r1*7) / 16;
                                        thisline[thisptr+1] += (g1*7) / 16;
                                        thisline[thisptr+2] += (b1*7) / 16;
                                }

				if (i!=imax) {     /* do BOTTOM pixel */
                                        nextline[nextptr+0] += (r1*5) / 16;
                                        nextline[nextptr+1] += (g1*5) / 16;
                                        nextline[nextptr+2] += (b1*5) / 16;
 
                                        if (j>0) {  /* do BOTTOM LEFT pixel */
                                                nextline[nextptr-3] += (r1*3) / 16;
                                                nextline[nextptr-2] += (g1*3) / 16;
                                                nextline[nextptr-1] += (b1*3) / 16;
                                        }
 
                                        if (j!=jmax) {  /* do BOTTOM RIGHT pixel */
                                                nextline[nextptr+3] += (r1)/16;
                                                nextline[nextptr+4] += (g1)/16;
                                                nextline[nextptr+5] += (b1)/16;
                                        }
                                        nextptr += 3;
                                }
                        }
                }
        }

	static final int MAX_LZW_BITS = 12;
        static final int TABLE_SIZE   = 5003;
	static final int LARGEST_CODE = 4095;

	static byte[]  code_buffer;
	static int[]  stack;
	static int    code_size, set_code_size;
	static int    free_code, max_code, max_code_size;
	static int    clear_code, eof_code;
	static int    curbit, lastbit, get_done, last_byte;
	static int    return_clear;
	static byte[] outpol;

	private static void initLZW(int input_code_size)
	{
		stack = new int[(1<<(MAX_LZW_BITS))*2];
        	set_code_size = input_code_size;
        	code_size     = set_code_size + 1;
        	clear_code    = 1 << set_code_size ;
        	eof_code      = clear_code + 1;
        	free_code     = clear_code + 2;
        	max_code      = (1 << code_size);
        	max_code_size = 2 * clear_code;
 
        	for (int i = 0; i < TABLE_SIZE; i++) stack[i] = 0;
	}

	private void WriteByte(int v)
	{
		byteArray[bytesInArray] = (byte)v;
		bytesInArray++;
	}

	private void cflush(int n)
	{
		WriteByte(n);
		for(int i=0;i<n;i++)
			WriteByte(code_buffer[i]);
	}

	private void write_code(int code)
	{
        	long temp;
 
        	last_byte = curbit >> 3;
        	lastbit = curbit & 7;
 
        	if (last_byte >= 254)
        	{
                	cflush(last_byte);
                	code_buffer[0] = code_buffer[last_byte];
                	curbit = lastbit;
                	last_byte = 0;
        	}
        	if (lastbit > 0)
        	{
                	temp = ((long) code << lastbit) | code_buffer[last_byte];
                	code_buffer[last_byte]   = (byte)temp;
                	code_buffer[last_byte+1] = (byte)(temp >> 8);
                	code_buffer[last_byte+2] = (byte)(temp >> 16);
        	}
        	else
        	{
                	code_buffer[last_byte]   = (byte)code;
                	code_buffer[last_byte+1] = (byte)(code >> 8);
        	}
        	curbit += code_size;
	}

	private void compressImage(int[] data, int min_code_size, int nbits)
	{
		int[] newcode=new int[TABLE_SIZE];
        	int[] oldcode=new int[TABLE_SIZE];
        	int prefix_code, suffix_char;
        	int i, hx, d;
 
        	if (min_code_size == 1) min_code_size = 2; 
        	WriteByte(min_code_size);
 
        	curbit = i = 0;
        	initLZW(min_code_size);
        	write_code(clear_code);
        	prefix_code = suffix_char = data[i++];

		while (i < nbits)
        	{
			if((i%1000)==0)
				progressBar("compressing image", nbits, i, Color.green);

                	suffix_char = data[i++];
                	hx = (prefix_code ^ (suffix_char << 5)) % TABLE_SIZE;
                	d = 1;
                	for (;;)
                	{
                        	if (stack[hx] == 0)
                        	{
                                	write_code(prefix_code);
                                	d = free_code;
                                	if (free_code <= LARGEST_CODE)
                                	{
                                        	oldcode[hx] = prefix_code;
                                        	newcode[hx] = suffix_char;
                                        	stack[hx] = free_code;
                                        	free_code++;
                                	}
                                	if (d == max_code)
                                	{
                                        	if (code_size < 12)
                                        	{
                                                	code_size++;
                                                	max_code <<= 1;
                                        	}
                                        	else
                                        	{
                                                	write_code(clear_code);
                                                	initLZW(min_code_size);
                                        	}
                                	}
                                	prefix_code = suffix_char;
                                	break;
                        	}
                        	if (oldcode[hx] == prefix_code &&
                            		newcode[hx] == suffix_char)
                        	{
                                	prefix_code = stack[hx];
                                	break;
                        	}
                        	hx++;
 
                        	if (hx >= TABLE_SIZE)
                                	hx -= TABLE_SIZE;
                	}
        	}
		write_code(prefix_code);
        	write_code(eof_code);
        	if (curbit > 0)
                	cflush((curbit + 7) / 8);
        	cflush(0);
	}

	private void save(int[] dat8, int[] red, int[] grn, int[] blu, int w, int h)
        {

		byteArray = new byte[w*h]; //overkill - big enough to fit w/o compression
		code_buffer = new byte[260];
		outpol = new byte[1];
		int nc = 255;

		/* Write the header */
        	WriteByte('G');
        	WriteByte('I');
        	WriteByte('F');
        	WriteByte('8');
        	WriteByte('7');
        	WriteByte('a');
        	WriteByte(w & 0xff);
        	WriteByte((w >> 8) & 0xff);
        	WriteByte(h & 0xff);
        	WriteByte((h >> 8) & 0xff);
        	WriteByte(nc);
        	WriteByte(0);               /* background */
        	WriteByte(0);               /* aspect ratio */

		/* write colormap */
		for (int i=0; i<256; ++i)
		{
			WriteByte(red[i]);
			WriteByte(grn[i]);
			WriteByte(blu[i]);
		}

		/* Write the Local Data */
        	WriteByte(',');     /* Start of an image */
        	WriteByte(0);       /* left */
        	WriteByte(0);    
        	WriteByte(0);       /* top  */
        	WriteByte(0);     
        	WriteByte(w & 0xff);
        	WriteByte((w >> 8) & 0xff);
        	WriteByte(h & 0xff);
        	WriteByte((h >> 8) & 0xff);
        	WriteByte(nc & 0x07);

		/* Write the image in compressed bytes */
        	compressImage(dat8, (nc & 0x07) + 1, w*h);
        	
		/* Write the terminator */
        	WriteByte(';');             /* Marks the end of the image */
        }

	private void save(int[] dat32, int w, int h)
        {
                int[] dat8 = new int[w*h];
                int[] red = new int[256];
                int[] grn = new int[256];
                int[] blu = new int[256];
                int i;
		byte[] c=new byte[1];
 
                dither(dat32, dat8, red, grn, blu, w, h);
		save(dat8, red, grn, blu, w, h);

        }

	private void save(Image img)
	{
		int imgW=img.getWidth(null);
                int imgH=img.getHeight(null);
                int[] dat32= new int[imgW*imgH];
 
                PixelGrabber grab = new PixelGrabber(img, 0, 0, imgW, imgH, dat32, 0, imgW);
                try {grab.grabPixels();}
                catch (InterruptedException e) {
			System.out.println("interrupted grab");
		}

		save(dat32, imgW, imgH);
	}
/****end of GIF code***/

	//simple progress bar
	private void progressBar(String msg, int total, int soFar, Color c){
		Dimension 	size;
		Graphics	g;

		if(myProgressBar == null)
			return;

		g = myProgressBar.getGraphics();
		g.setColor(c);
		g.fillRect(0, 0, myProgressBar.size().width*soFar/total, 
			myProgressBar.size().height);
	}
}
