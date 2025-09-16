create table outartaf
(
  otarurno    varchar2(8) default ' ' not null,
  otarrefn    varchar2(8) default ' ' not null,
  otarrqdt    varchar2(8) default ' ' not null,
  otarrqtm    varchar2(8) default ' ' not null,
  otarrdep    varchar2(3) default ' ' not null,
  otaradep    varchar2(3) default ' ' not null,
  otarprdt    varchar2(8) default ' ' not null,
  otarprhs    varchar2(3) default ' ' not null,
  otarprsi    varchar2(6) default ' ' not null,
  otarclty    varchar2(6) default ' ' not null,
  otarclid    varchar2(6) default ' ' not null,
  otarvist    varchar2(3) default ' ' not null,
  otartrrq    varchar2(3) default ' ' not null,
  otarpcom    varchar2(50) default ' ' not null,
  otarfinc    varchar2(3) default ' ' not null,
  otarprio    varchar2(3) default ' ' not null,
  otarsorf    varchar2(3) default ' ' not null,
  otarsarr    varchar2(3) default ' ' not null,
  otaroobn    varchar2(8) default ' ' not null,
  otarstat    varchar2(1) default ' ' not null,
  otarrreq    varchar2(3) default ' ' not null,
  otarrcan    varchar2(3) default ' ' not null,
  otarcadt    varchar2(8) default ' ' not null,
  otarcatm    varchar2(8) default ' ' not null,
  otarcaus    varchar2(10) default ' ' not null,
  otarbkno    varchar2(8) default ' ' not null,
  otarbksi    varchar2(6) default ' ' not null,
  otarbkcl    varchar2(6) default ' ' not null,
  otarbkdt    varchar2(8) default ' ' not null,
  otarclst    varchar2(5) default ' ' not null,
  otarclsn    varchar2(3) default ' ' not null,
  otarcltm    varchar2(5) default ' ' not null,
  otarbkid    varchar2(10) default ' ' not null,
  otarcdat    varchar2(8) default ' ' not null,
  otarctim    varchar2(8) default ' ' not null,
  otarcuid    varchar2(10) default ' ' not null,
  otarcpdt    varchar2(8) default ' ' not null,
  otarcptm    varchar2(8) default ' ' not null,
  otarcpid    varchar2(10) default ' ' not null,
  otarfsrc    varchar2(3) default ' ' not null,
  otarintr    varchar2(1) default ' ' not null,
  otarlng1    varchar2(3) default ' ' not null,
  otarcmid    varchar2(10) default ' ' not null,
  otarspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outarta1 primary key( 
otarurno,
otarrefn,
otarrqdt,
otarrqtm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outarta2 on outartaf
(
otarstat,
otarrqdt,
otarrqtm,
otarurno,
otarrefn
)
  tablespace pas_indx; 
create unique index outarta3 on outartaf
(
otarprdt,
otarstat,
otarrqdt,
otarrqtm,
otarurno,
otarrefn
)
  tablespace pas_indx; 
create unique index outarta4 on outartaf
(
otarprhs,
otarprsi,
otarstat,
otarrqdt,
otarrqtm,
otarurno,
otarrefn
)
  tablespace pas_indx; 
