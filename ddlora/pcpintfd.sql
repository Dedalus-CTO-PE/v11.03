create table pcpaudin
(
  pcinaudd    varchar2(8) default ' ' not null,
  pcinaudt    varchar2(8) default ' ' not null,
  pcinaudp    varchar2(2) default ' ' not null,
  pcinaudr    varchar2(1) default ' ' not null,
  pcinauds    number(1,0) default 0 not null,
  pcinaudo    varchar2(4) default ' ' not null,
  pcinuniq    varchar2(10) default ' ' not null,
  pcincode    varchar2(9) default ' ' not null,
  pcindcod    varchar2(4) default ' ' not null,
  pcinfreq    varchar2(9) default ' ' not null,
  pcinstaf    varchar2(3) default ' ' not null,
  pcintime    number(4,0) default 0 not null,
  pcinodte    varchar2(8) default ' ' not null,
  pcinosft    varchar2(3) default ' ' not null,
  pcinspar    varchar2(5) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudin on pcpaudin
(
pcinaudd,
pcinaudt,
pcinaudp,
pcinaudr
)
tablespace pas_indx; 
create table pcpintaf
(
  pcinuniq    varchar2(10) default ' ' not null,
  pcincode    varchar2(9) default ' ' not null,
  pcindcod    varchar2(4) default ' ' not null,
  pcinfreq    varchar2(9) default ' ' not null,
  pcinstaf    varchar2(3) default ' ' not null,
  pcintime    number(4,0) default 0 not null,
  pcinodte    varchar2(8) default ' ' not null,
  pcinosft    varchar2(3) default ' ' not null,
  pcinspar    varchar2(5) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpinta1 primary key( 
pcinuniq,
pcincode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
