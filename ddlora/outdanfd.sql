create table outdanaf
(
  otdnurno    varchar2(8) default ' ' not null,
  otdnadat    varchar2(8) default ' ' not null,
  otdnatim    varchar2(8) default ' ' not null,
  otdnatyp    varchar2(2) default ' ' not null,
  otdnvisn    varchar2(8) default ' ' not null,
  otdncomp    varchar2(1) default ' ' not null,
  otdnoutc    varchar2(3) default ' ' not null,
  otdncomm    varchar2(80) default ' ' not null,
  otdncomd    varchar2(8) default ' ' not null,
  otdncomt    varchar2(8) default ' ' not null,
  otdncomu    varchar2(10) default ' ' not null,
  otdncdat    varchar2(8) default ' ' not null,
  otdnctim    varchar2(8) default ' ' not null,
  otdncuid    varchar2(10) default ' ' not null,
  otdnudat    varchar2(8) default ' ' not null,
  otdnutim    varchar2(8) default ' ' not null,
  otdnuuid    varchar2(10) default ' ' not null,
  otdnrefn    varchar2(8) default ' ' not null,
  otdnvdat    varchar2(8) default ' ' not null,
  otdnreqc    varchar2(3) default ' ' not null,
  otdnspar    varchar2(41) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outdana1 primary key( 
otdnurno,
otdnadat,
otdnatim,
otdnatyp,
otdnvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outdana2 on outdanaf
(
otdnurno,
otdnvisn,
otdnatyp,
otdnadat,
otdnatim
)
  tablespace pas_indx; 
create unique index outdana3 on outdanaf
(
otdnadat,
otdnatim,
otdnatyp,
otdnurno,
otdnvisn
)
  tablespace pas_indx; 
create unique index outdana4 on outdanaf
(
otdnvdat,
otdnurno,
otdnadat,
otdnatim,
otdnatyp,
otdnvisn
)
  tablespace pas_indx; 
