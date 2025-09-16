create table aaedi1af
(
  adsnumb     varchar2(8) default ' ' not null,
  adsdate     varchar2(8) default ' ' not null,
  adstime     varchar2(5) default ' ' not null,
  adssses     varchar2(60) default ' ' not null,
  adsdisc     varchar2(3) default ' ' not null,
  adsdiag     varchar2(7) default ' ' not null,
  aedsdcft    varchar2(8) default ' ' not null,
  aedstcft    varchar2(5) default ' ' not null,
  aedsddta    varchar2(8) default ' ' not null,
  aedsdcon    varchar2(8) default ' ' not null,
  aedstcon    varchar2(5) default ' ' not null,
  aedsdadm    varchar2(8) default ' ' not null,
  aedstadm    varchar2(5) default ' ' not null,
  aedsusr6    varchar2(3) default ' ' not null,
  aedsusr7    varchar2(3) default ' ' not null,
  aedsusr8    varchar2(3) default ' ' not null,
  aedsoper    varchar2(4) default ' ' not null,
  aedsspar    varchar2(48) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaedi1a1 primary key( 
adsnumb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index aaedi1a2 on aaedi1af
(
adsdate,
adsnumb
)
  tablespace pas_indx; 
