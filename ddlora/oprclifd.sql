create table oprcliaf
(
  opclclin    varchar2(6) default ' ' not null,
  opcldesc    varchar2(30) default ' ' not null,
  opcldoct    varchar2(6) default ' ' not null,
  opclcat     varchar2(3) default ' ' not null,
  opclactv    varchar2(1) default ' ' not null,
  opclspar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprclia1 primary key( 
opclclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprclia2 on oprcliaf
(
opcldesc,
opclclin
)
  tablespace pas_indx; 
