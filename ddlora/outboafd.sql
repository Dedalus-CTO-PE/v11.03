create table outaudba
(
  otbaaudd    varchar2(8) default ' ' not null,
  otbaaudt    varchar2(8) default ' ' not null,
  otbaaudp    varchar2(2) default ' ' not null,
  otbaaudr    varchar2(1) default ' ' not null,
  otbaauds    number(1,0) default 0 not null,
  otbaaudo    varchar2(4) default ' ' not null,
  obasite     varchar2(6) default ' ' not null,
  obaclin     varchar2(6) default ' ' not null,
  obadate     varchar2(8) default ' ' not null,
  obastrt     varchar2(5) default ' ' not null,
  dobaslot    varchar2(3) default ' ' not null,
  obatime     varchar2(5) default ' ' not null,
  obactyp     varchar2(6) default ' ' not null,
  obaurno     varchar2(8) default ' ' not null,
  obavisit    varchar2(3) default ' ' not null,
  dobaoutn    varchar2(8) default ' ' not null,
  dobastat    varchar2(1) default ' ' not null,
  obaday      number(1,0) default 0 not null,
  obaexsl     number(3,0) default 0 not null,
  obafinst    varchar2(4) default ' ' not null,
  obalock     varchar2(2) default ' ' not null,
  obapxray    number(1,0) default 0 not null,
  obabkdte    varchar2(16) default ' ' not null,
  obapull     number(1,0) default 0 not null,
  obasesst    varchar2(3) default ' ' not null,
  obadisch    varchar2(3) default ' ' not null,
  dotbares    varchar2(2) default ' ' not null,
  obaspara    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index outaudba on outaudba
(
otbaaudd,
otbaaudt,
otbaaudp,
otbaaudr
)
tablespace pas_indx; 
create table outbokaf
(
  obasite     varchar2(6) default ' ' not null,
  obaclin     varchar2(6) default ' ' not null,
  obadate     varchar2(8) default ' ' not null,
  obastrt     varchar2(5) default ' ' not null,
  dobaslot    varchar2(3) default ' ' not null,
  obatime     varchar2(5) default ' ' not null,
  obactyp     varchar2(6) default ' ' not null,
  obaurno     varchar2(8) default ' ' not null,
  obavisit    varchar2(3) default ' ' not null,
  dobaoutn    varchar2(8) default ' ' not null,
  dobastat    varchar2(1) default ' ' not null,
  obaday      number(1,0) default 0 not null,
  obaexsl     number(3,0) default 0 not null,
  obafinst    varchar2(4) default ' ' not null,
  obalock     varchar2(2) default ' ' not null,
  obapxray    number(1,0) default 0 not null,
  obabkdte    varchar2(16) default ' ' not null,
  obapull     number(1,0) default 0 not null,
  obasesst    varchar2(3) default ' ' not null,
  obadisch    varchar2(3) default ' ' not null,
  dotbares    varchar2(2) default ' ' not null,
  obaspara    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outboka1 primary key( 
obasite,
obaclin,
obadate,
obastrt,
dobaslot)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outboka2 on outbokaf
(
obasite,
obactyp,
dobastat,
obadate,
obastrt,
dobaslot,
obaclin
)
  tablespace pas_indx; 
create unique index outboka3 on outbokaf
(
obaurno,
obadate,
obastrt,
dobaslot,
obasite,
obaclin
)
  tablespace pas_indx; 
create unique index outboka4 on outbokaf
(
obasite,
obactyp,
obaclin,
dobastat,
obadate,
obastrt,
dobaslot
)
  tablespace pas_indx; 
create unique index outboka5 on outbokaf
(
obasite,
obactyp,
obadate,
obastrt,
obaclin,
dobastat,
dobaslot
)
  tablespace pas_indx; 
create unique index outboka6 on outbokaf
(
dobaoutn,
obadate,
obastrt,
dobaslot,
obasite,
obaclin
)
  tablespace pas_indx; 
