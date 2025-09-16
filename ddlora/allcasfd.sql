create table allcasaf
(
  alcateam    varchar2(10) default ' ' not null,
  alcadesc    varchar2(40) default ' ' not null,
  alcalpat    varchar2(10) default ' ' not null,
  alcalref    varchar2(10) default ' ' not null,
  alcacdep    varchar2(5) default ' ' not null,
  alcalcod    varchar2(2) default ' ' not null,
  alcaacod    varchar2(12) default ' ' not null,
  alcaactv    varchar2(1) default ' ' not null,
  alcahosp    varchar2(3) default ' ' not null,
  alcacdat    varchar2(8) default ' ' not null,
  alcactim    varchar2(8) default ' ' not null,
  alcacuid    varchar2(10) default ' ' not null,
  alcaudat    varchar2(8) default ' ' not null,
  alcautim    varchar2(8) default ' ' not null,
  alcauuid    varchar2(10) default ' ' not null,
  alcaorid    varchar2(8) default ' ' not null,
  alcaspar    varchar2(42) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allcasa1 primary key( 
alcateam)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allcasa2 on allcasaf
(
alcadesc,
alcateam
)
  tablespace pas_indx; 
