create table ibaprtaf
(
  qprtcode    char(6) default ' ' not null,
  prtdesc     char(20) default ' ' not null,
  prtaval     decimal(1,0) default 0 not null,
  prttype     decimal(2,0) default 0 not null,
  prtpaper    decimal(2,0) default 0 not null,
  ibpthosp    char(3) default ' ' not null,
  ibptquen    char(50) default ' ' not null,
  ibptlocn    char(80) default ' ' not null,
  ibptscrp    char(80) default ' ' not null,
  prtspare    char(100) default ' ' not null,
  lf          char(1)
);
create unique index ibaprta1 on ibaprtaf
(
qprtcode
);
create unique index ibaprta2 on ibaprtaf
(
ibpthosp,
qprtcode
);
revoke all on ibaprtaf from public ; 
grant select on ibaprtaf to public ; 
