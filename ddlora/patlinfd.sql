create table patlinkf
(
  linkfur     varchar2(8) default ' ' not null,
  linktur     varchar2(8) default ' ' not null,
  linkdat     varchar2(8) default ' ' not null,
  linkrea     varchar2(3) default ' ' not null,
  linkspr     varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patlink1 primary key( 
linkfur,
linktur)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patlink2 on patlinkf
(
linkdat,
linkfur,
linktur
)
  tablespace pas_indx; 
