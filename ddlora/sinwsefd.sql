create table sinwseaf
(
  siwsuid     varchar2(4) default ' ' not null,
  siwswar     varchar2(5) default ' ' not null,
  siwslev     number(1,0) default 0 not null,
  siwsspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinwsea1 primary key( 
siwsuid,
siwswar)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinwsea2 on sinwseaf
(
siwswar,
siwsuid
)
  tablespace pas_indx; 
