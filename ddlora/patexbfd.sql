create table patexbnn
(
  dptxbadm    varchar2(8) default ' ' not null,
  ptxbtdat    varchar2(8) default ' ' not null,
  ptxbtype    varchar2(1) default ' ' not null,
  ptxbnday    number(4,0) default 0 not null,
  ptxbtwrd    varchar2(3) default ' ' not null,
  ptxbtbed    varchar2(3) default ' ' not null,
  ptxbttyp    varchar2(3) default ' ' not null,
  ptxbtcre    varchar2(3) default ' ' not null,
  ptxbtdpt    varchar2(3) default ' ' not null,
  ptxbtadc    varchar2(6) default ' ' not null,
  ptxbtadt    varchar2(3) default ' ' not null,
  ptxbaccm    number(14,2) default 0 not null,
  ptxbaccp    number(14,2) default 0 not null,
  ptxbaccr    number(14,2) default 0 not null,
  ptxbdisc    number(14,2) default 0 not null,
  ptxballw    number(14,2) default 0 not null,
  ptxbthet    number(14,2) default 0 not null,
  ptxbthtp    number(14,2) default 0 not null,
  ptxbthtr    number(14,2) default 0 not null,
  ptxbmisc    number(14,2) default 0 not null,
  ptxbmisp    number(14,2) default 0 not null,
  ptxbmisr    number(14,2) default 0 not null,
  ptxblspt    number(14,2) default 0 not null,
  ptxblsrb    number(14,2) default 0 not null,
  ptxbspar    varchar2(51) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patextb1 primary key( 
dptxbadm,
ptxbtdat,
ptxbtype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
