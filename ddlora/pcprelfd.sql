create table pcpaudre
(
  pcreaudd    varchar2(8) default ' ' not null,
  pcreaudt    varchar2(8) default ' ' not null,
  pcreaudp    varchar2(2) default ' ' not null,
  pcreaudr    varchar2(1) default ' ' not null,
  pcreauds    number(1,0) default 0 not null,
  pcreaudo    varchar2(4) default ' ' not null,
  pcreuniq    varchar2(10) default ' ' not null,
  pcrefact    varchar2(9) default ' ' not null,
  pcredcod    varchar2(4) default ' ' not null,
  pcrespar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudre on pcpaudre
(
pcreaudd,
pcreaudt,
pcreaudp,
pcreaudr
)
tablespace pas_indx; 
create table pcprelaf
(
  pcreuniq    varchar2(10) default ' ' not null,
  pcrefact    varchar2(9) default ' ' not null,
  pcredcod    varchar2(4) default ' ' not null,
  pcrespar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcprela1 primary key( 
pcreuniq,
pcrefact)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
