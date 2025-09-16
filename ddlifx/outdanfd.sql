create table outdanaf
(
  otdnurno    char(8) default ' ' not null,
  otdnadat    char(8) default ' ' not null,
  otdnatim    char(8) default ' ' not null,
  otdnatyp    char(2) default ' ' not null,
  otdnvisn    char(8) default ' ' not null,
  otdncomp    char(1) default ' ' not null,
  otdnoutc    char(3) default ' ' not null,
  otdncomm    char(80) default ' ' not null,
  otdncomd    char(8) default ' ' not null,
  otdncomt    char(8) default ' ' not null,
  otdncomu    char(10) default ' ' not null,
  otdncdat    char(8) default ' ' not null,
  otdnctim    char(8) default ' ' not null,
  otdncuid    char(10) default ' ' not null,
  otdnudat    char(8) default ' ' not null,
  otdnutim    char(8) default ' ' not null,
  otdnuuid    char(10) default ' ' not null,
  otdnrefn    char(8) default ' ' not null,
  otdnvdat    char(8) default ' ' not null,
  otdnreqc    char(3) default ' ' not null,
  otdnspar    char(41) default ' ' not null,
  lf          char(1)
);
create unique index outdana1 on outdanaf
(
otdnurno,
otdnadat,
otdnatim,
otdnatyp,
otdnvisn
);
create unique index outdana2 on outdanaf
(
otdnurno,
otdnvisn,
otdnatyp,
otdnadat,
otdnatim
);
create unique index outdana3 on outdanaf
(
otdnadat,
otdnatim,
otdnatyp,
otdnurno,
otdnvisn
);
create unique index outdana4 on outdanaf
(
otdnvdat,
otdnurno,
otdnadat,
otdnatim,
otdnatyp,
otdnvisn
);
revoke all on outdanaf from public ; 
grant select on outdanaf to public ; 
