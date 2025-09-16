create table legdtref
(
  dlatnumb    varchar2(8) default ' ' not null,
  latinvno    varchar2(8) default ' ' not null,
  dlattran    varchar2(6) default ' ' not null,
  latddesc    varchar2(30) default ' ' not null,
  laedtamn    number(14,2) default 0 not null,
  latddate    varchar2(8) default ' ' not null,
  latitemn    varchar2(9) default ' ' not null,
  lattype     varchar2(2) default ' ' not null,
  latpayty    number(1,0) default 0 not null,
  latrecep    varchar2(12) default ' ' not null,
  latinvpr    number(1,0) default 0 not null,
  dlatrect    varchar2(1) default ' ' not null,
  latchgdt    varchar2(8) default ' ' not null,
  latchgti    varchar2(8) default ' ' not null,
  latmisgr    varchar2(3) default ' ' not null,
  latdepty    varchar2(3) default ' ' not null,
  latbatch    varchar2(8) default ' ' not null,
  laedtptp    number(14,2) default 0 not null,
  laedtrbp    number(14,2) default 0 not null,
  latdepfl    varchar2(1) default ' ' not null,
  lateffdt    varchar2(8) default ' ' not null,
  laedtgst    number(1,0) default 0 not null,
  laedtgsc    varchar2(6) default ' ' not null,
  laedtgsa    number(14,2) default 0 not null,
  laedtssa    varchar2(1) default ' ' not null,
  latspare    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legdtre1 primary key( 
dlatnumb,
latinvno,
dlattran)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legdtre2 on legdtref
(
dlatrect,
latdepfl,
lateffdt,
dlatnumb,
latinvno,
dlattran
)
  tablespace pas_indx; 
create unique index legdtre3 on legdtref
(
dlatnumb,
latinvno,
dlatrect,
latddate,
dlattran
)
  tablespace pas_indx; 
create unique index legdtre4 on legdtref
(
laedtssa,
latinvno,
dlatrect,
dlatnumb,
dlattran
)
  tablespace pas_indx; 
