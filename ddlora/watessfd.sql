create table watessaf
(
wtssyear    varchar2(4),
wtssrunn    varchar2(3),
wtssdate    varchar2(8),
wtssspar    varchar2(26),
lf          varchar2(1),
constraint watessa1 primary key( 
wtssyear,
wtssrunn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym watessaf for watessaf;
create unique index watessa2 on watessaf
(
wtssdate,
wtssyear,
wtssrunn
)
  tablespace pas_indx; 
