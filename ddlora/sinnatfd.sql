create table sinnataf
(
  sinacat     varchar2(7) default ' ' not null,
  sinanat     varchar2(10) default ' ' not null,
  sinaspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinnata1 primary key( 
sinacat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinnata2 on sinnataf
(
sinanat,
sinacat
)
  tablespace pas_indx; 
