create table outvacaf
(
  otvacode    varchar2(3) default ' ' not null,
  otvadate    varchar2(8) default ' ' not null,
  otvawght    number(8,4) default 0 not null,
  otvaamnt    number(14,2) default 0 not null,
  otvaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outvaca1 primary key( 
otvacode,
otvadate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outvaca2 on outvacaf
(
otvadate,
otvacode
)
  tablespace pas_indx; 
