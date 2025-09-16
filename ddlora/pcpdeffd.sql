create table pcpaudde
(
  pcdeaudd    varchar2(8) default ' ' not null,
  pcdeaudt    varchar2(8) default ' ' not null,
  pcdeaudp    varchar2(2) default ' ' not null,
  pcdeaudr    varchar2(1) default ' ' not null,
  pcdeauds    number(1,0) default 0 not null,
  pcdeaudo    varchar2(4) default ' ' not null,
  pcdeuniq    varchar2(10) default ' ' not null,
  pcdechar    varchar2(9) default ' ' not null,
  pcdedcod    varchar2(4) default ' ' not null,
  pcdespar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudde on pcpaudde
(
pcdeaudd,
pcdeaudt,
pcdeaudp,
pcdeaudr
)
tablespace pas_indx; 
create table pcpdefaf
(
  pcdeuniq    varchar2(10) default ' ' not null,
  pcdechar    varchar2(9) default ' ' not null,
  pcdedcod    varchar2(4) default ' ' not null,
  pcdespar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpdefa1 primary key( 
pcdeuniq,
pcdechar)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
