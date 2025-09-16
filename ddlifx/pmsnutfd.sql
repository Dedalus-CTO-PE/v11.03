create table pmsnutaf
(
  pmnuadmn    char(8) default ' ' not null,
  pmnudate    char(8) default ' ' not null,
  pmnucrtd    char(16) default ' ' not null,
  pmnuupdd    char(16) default ' ' not null,
  pmnucrtu    char(10) default ' ' not null,
  pmnuupdu    char(10) default ' ' not null,
  pmnudtyp    char(3) default ' ' not null,
  pmnuward    char(3) default ' ' not null,
  pmnusize    char(3) default ' ' not null,
  pmnudcde    char(10) default ' ' not null,
  pmnupagn    char(20) default ' ' not null,
  pmnualvl    char(3) default ' ' not null,
  pmnuflui    char(3) default ' ' not null,
  pmnuteat    char(3) default ' ' not null,
  pmnuadtv    char(3) default ' ' not null,
  pmnuvolu    char(3) default ' ' not null,
  pmnuml01    char(3) default ' ' not null,
  pmnuml02    char(3) default ' ' not null,
  pmnuml03    char(3) default ' ' not null,
  pmnuml04    char(3) default ' ' not null,
  pmnuml05    char(3) default ' ' not null,
  pmnuml06    char(3) default ' ' not null,
  pmnuml07    char(3) default ' ' not null,
  pmnuml08    char(3) default ' ' not null,
  pmnuml09    char(3) default ' ' not null,
  pmnuml10    char(3) default ' ' not null,
  pmnustat    decimal(1,0) default 0 not null,
  pmnubelt    decimal(1,0) default 0 not null,
  pmnumtyp    decimal(1,0) default 0 not null,
  pmnuprnt    char(16) default ' ' not null,
  pmnucom1    char(40) default ' ' not null,
  pmnucom2    char(40) default ' ' not null,
  pmnucom3    char(40) default ' ' not null,
  pmnucom4    char(40) default ' ' not null,
  pmnucom5    char(40) default ' ' not null,
  pmnuudf1    char(3) default ' ' not null,
  pmnuudf2    char(3) default ' ' not null,
  pmnuudf3    char(3) default ' ' not null,
  pmnuudf4    char(3) default ' ' not null,
  pmnuudf5    char(3) default ' ' not null,
  pmnufast    char(1) default ' ' not null,
  pmnubsup    char(40) default ' ' not null,
  pmnumsup    char(40) default ' ' not null,
  pmnulsup    char(40) default ' ' not null,
  pmnuasup    char(40) default ' ' not null,
  pmnudsup    char(40) default ' ' not null,
  pmnussup    char(40) default ' ' not null,
  pmnudiet    char(3) default ' ' not null,
  pmnuspar    char(59) default ' ' not null,
  lf          char(1)
);
create unique index pmsnuta1 on pmsnutaf
(
pmnuadmn,
pmnudate
);
create unique index pmsnuta2 on pmsnutaf
(
pmnudate,
pmnuadmn
);
revoke all on pmsnutaf from public ; 
grant select on pmsnutaf to public ; 
