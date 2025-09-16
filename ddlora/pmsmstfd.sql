create table pmsmstsf
(
msunit      varchar2(3),
msudate     varchar2(6),
msunprad    number(8,0),
msunpbad    number(8,0),
msutrin     number(8,0),
msutrout    number(8,0),
msudsch     number(8,0),
msunbday    number(8,0),
msubbday    number(8,0),
msudeath    number(8,0),
msubprad    number(8,0),
msubpbad    number(8,0),
msulvbd     number(8,0),
msuaeadm    number(8,0),
msuobsth    number(8,0),
msuoutth    number(8,0),
msudymth    number(2,0),
msunopat    number(8,0),
msusepbd    number(8,0),
dmsuabdy    varchar2(8),
msuspare    varchar2(25),
lf          varchar2(1),
constraint pmsmsts1 primary key( 
msunit,
msudate)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmsmstsf for pmsmstsf;
