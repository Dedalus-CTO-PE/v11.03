create table legdtref
(
  dlatnumb    char(8) default ' ' not null,
  latinvno    char(8) default ' ' not null,
  dlattran    char(6) default ' ' not null,
  latddesc    char(30) default ' ' not null,
  laedtamn    decimal(14,2) default 0 not null,
  latddate    char(8) default ' ' not null,
  latitemn    char(9) default ' ' not null,
  lattype     char(2) default ' ' not null,
  latpayty    decimal(1,0) default 0 not null,
  latrecep    char(12) default ' ' not null,
  latinvpr    decimal(1,0) default 0 not null,
  dlatrect    char(1) default ' ' not null,
  latchgdt    char(8) default ' ' not null,
  latchgti    char(8) default ' ' not null,
  latmisgr    char(3) default ' ' not null,
  latdepty    char(3) default ' ' not null,
  latbatch    char(8) default ' ' not null,
  laedtptp    decimal(14,2) default 0 not null,
  laedtrbp    decimal(14,2) default 0 not null,
  latdepfl    char(1) default ' ' not null,
  lateffdt    char(8) default ' ' not null,
  laedtgst    decimal(1,0) default 0 not null,
  laedtgsc    char(6) default ' ' not null,
  laedtgsa    decimal(14,2) default 0 not null,
  laedtssa    char(1) default ' ' not null,
  latspare    char(9) default ' ' not null,
  lf          char(1)
);
create unique index legdtre1 on legdtref
(
dlatnumb,
latinvno,
dlattran
);
create unique index legdtre2 on legdtref
(
dlatrect,
latdepfl,
lateffdt,
dlatnumb,
latinvno,
dlattran
);
create unique index legdtre3 on legdtref
(
dlatnumb,
latinvno,
dlatrect,
latddate,
dlattran
);
create unique index legdtre4 on legdtref
(
laedtssa,
latinvno,
dlatrect,
dlatnumb,
dlattran
);
revoke all on legdtref from public ; 
grant select on legdtref to public ; 
