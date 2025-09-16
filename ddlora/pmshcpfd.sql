create table pmshcpaf
(
  pmhchcpc    varchar2(10) default ' ' not null,
  pmhchcpt    varchar2(2) default ' ' not null,
  pmhctitl    varchar2(10) default ' ' not null,
  pmhcgnam    varchar2(35) default ' ' not null,
  pmhcsnam    varchar2(35) default ' ' not null,
  pmhcinit    varchar2(5) default ' ' not null,
  pmhcgndr    varchar2(1) default ' ' not null,
  pmhcdtob    varchar2(8) default ' ' not null,
  pmhcspc1    varchar2(3) default ' ' not null,
  pmhcspd1    varchar2(8) default ' ' not null,
  pmhcspc2    varchar2(3) default ' ' not null,
  pmhcspd2    varchar2(8) default ' ' not null,
  pmhcspc3    varchar2(3) default ' ' not null,
  pmhcspd3    varchar2(8) default ' ' not null,
  pmhcspc4    varchar2(3) default ' ' not null,
  pmhcspd4    varchar2(8) default ' ' not null,
  pmhcspc5    varchar2(3) default ' ' not null,
  pmhcspd5    varchar2(8) default ' ' not null,
  pmhcrcpt    varchar2(25) default ' ' not null,
  pmhcadr1    varchar2(60) default ' ' not null,
  pmhcadr2    varchar2(60) default ' ' not null,
  pmhcadr3    varchar2(60) default ' ' not null,
  pmhcadr4    varchar2(60) default ' ' not null,
  pmhcadr5    varchar2(60) default ' ' not null,
  pmhcadr6    varchar2(60) default ' ' not null,
  pmhcpost    varchar2(8) default ' ' not null,
  pmhcstat    varchar2(4) default ' ' not null,
  pmhcseml    varchar2(80) default ' ' not null,
  pmhcstel    varchar2(20) default ' ' not null,
  pmhcpagr    varchar2(20) default ' ' not null,
  pmhcpagn    varchar2(20) default ' ' not null,
  pmhcahp1    varchar2(25) default ' ' not null,
  pmhcahp2    varchar2(25) default ' ' not null,
  pmhcahp3    varchar2(25) default ' ' not null,
  pmhcahp4    varchar2(25) default ' ' not null,
  pmhcahp5    varchar2(25) default ' ' not null,
  pmhcprv1    varchar2(10) default ' ' not null,
  pmhcprv2    varchar2(10) default ' ' not null,
  pmhcprv3    varchar2(10) default ' ' not null,
  pmhcprv4    varchar2(10) default ' ' not null,
  pmhcprv5    varchar2(10) default ' ' not null,
  pmhchtel    varchar2(20) default ' ' not null,
  pmhchad1    varchar2(60) default ' ' not null,
  pmhchad2    varchar2(60) default ' ' not null,
  pmhchad3    varchar2(60) default ' ' not null,
  pmhchad4    varchar2(60) default ' ' not null,
  pmhchad5    varchar2(60) default ' ' not null,
  pmhchad6    varchar2(60) default ' ' not null,
  pmhchpcd    varchar2(8) default ' ' not null,
  pmhcheml    varchar2(80) default ' ' not null,
  pmhcdfac    varchar2(8) default ' ' not null,
  pmhcdlac    varchar2(8) default ' ' not null,
  pmhcyacc    number(2,0) default 0 not null,
  pmhcatyp    varchar2(3) default ' ' not null,
  pmhchhcp    number(3,0) default 0 not null,
  pmhcoslv    varchar2(3) default ' ' not null,
  pmhchcst    number(2,0) default 0 not null,
  pmhchcsd    varchar2(8) default ' ' not null,
  pmhcfaxn    varchar2(20) default ' ' not null,
  pmhchfxn    varchar2(20) default ' ' not null,
  pmhcmobn    varchar2(20) default ' ' not null,
  pmhccrdc    varchar2(5) default ' ' not null,
  pmhcwahc    varchar2(10) default ' ' not null,
  pmhcmrbn    varchar2(10) default ' ' not null,
  pmhcnhsn    varchar2(10) default ' ' not null,
  pmhcudf1    varchar2(3) default ' ' not null,
  pmhcudf2    varchar2(3) default ' ' not null,
  pmhcudf3    varchar2(3) default ' ' not null,
  pmhcudf4    varchar2(3) default ' ' not null,
  pmhcudf5    varchar2(3) default ' ' not null,
  pmhcuyn1    varchar2(1) default ' ' not null,
  pmhcuyn2    varchar2(1) default ' ' not null,
  pmhcuyn3    varchar2(1) default ' ' not null,
  pmhcuyn4    varchar2(1) default ' ' not null,
  pmhcuyn5    varchar2(1) default ' ' not null,
  pmhcinsc    varchar2(6) default ' ' not null,
  pmhcipln    varchar2(20) default ' ' not null,
  pmhcidtf    varchar2(8) default ' ' not null,
  pmhcidtt    varchar2(8) default ' ' not null,
  pmhcmpgn    varchar2(20) default ' ' not null,
  pmhcapci    varchar2(1) default ' ' not null,
  pmhcregt    varchar2(3) default ' ' not null,
  pmhcrgdf    varchar2(8) default ' ' not null,
  pmhcrgdt    varchar2(8) default ' ' not null,
  pmhcprdf    varchar2(8) default ' ' not null,
  pmhcprdt    varchar2(8) default ' ' not null,
  pmhctsdf    varchar2(8) default ' ' not null,
  pmhctfdt    varchar2(8) default ' ' not null,
  pmhcvisd    varchar2(8) default ' ' not null,
  pmhcprfc    varchar2(3) default ' ' not null,
  pmhcprfn    varchar2(30) default ' ' not null,
  pmhcabnn    varchar2(11) default ' ' not null,
  pmhcupdf    varchar2(1) default ' ' not null,
  pmhcprmk    varchar2(1) default ' ' not null,
  pmhcstts    varchar2(1) default ' ' not null,
  pmhcdlmi    varchar2(8) default ' ' not null,
  pmhcdlma    varchar2(8) default ' ' not null,
  pmhccdte    varchar2(8) default ' ' not null,
  pmhcctim    varchar2(8) default ' ' not null,
  pmhcwebc    varchar2(10) default ' ' not null,
  pmhclupd    varchar2(8) default ' ' not null,
  pmhclupt    varchar2(8) default ' ' not null,
  pmhcwebu    varchar2(10) default ' ' not null,
  pmhcslgp    varchar2(1) default ' ' not null,
  pmhchoss    varchar2(1) default ' ' not null,
  pmhcptyp    varchar2(3) default ' ' not null,
  pmhcexml    varchar2(1) default ' ' not null,
  pmhcdeac    varchar2(8) default ' ' not null,
  pmhccper    varchar2(6) default ' ' not null,
  pmhcahc1    varchar2(3) default ' ' not null,
  pmhcahc2    varchar2(3) default ' ' not null,
  pmhcahc3    varchar2(3) default ' ' not null,
  pmhcldoc    varchar2(6) default ' ' not null,
  pmhcsdat    varchar2(8) default ' ' not null,
  pmhcedat    varchar2(8) default ' ' not null,
  pmhcnhta    varchar2(20) default ' ' not null,
  pmhcwwcn    varchar2(20) default ' ' not null,
  pmhcwwce    varchar2(8) default ' ' not null,
  pmhcwwcs    varchar2(3) default ' ' not null,
  pmhcsmd1    varchar2(16) default ' ' not null,
  pmhcsmd2    varchar2(16) default ' ' not null,
  pmhcspar    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmshcpa1 primary key( 
pmhchcpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmshcpa2 on pmshcpaf
(
pmhcsnam,
pmhcgnam,
pmhchcpc
)
  tablespace pas_indx; 
create unique index pmshcpa3 on pmshcpaf
(
pmhcprv1,
pmhchcpc
)
  tablespace pas_indx; 
create unique index pmshcpa4 on pmshcpaf
(
pmhcldoc,
pmhchcpc
)
  tablespace pas_indx; 
create unique index pmshcpa5 on pmshcpaf
(
pmhccdte,
pmhcctim,
pmhchcpc
)
  tablespace pas_indx; 
create unique index pmshcpa6 on pmshcpaf
(
pmhclupd,
pmhclupt,
pmhchcpc
)
  tablespace pas_indx; 
create unique index pmshcpa7 on pmshcpaf
(
pmhcmpgn,
pmhchcpc
)
  tablespace pas_indx; 
