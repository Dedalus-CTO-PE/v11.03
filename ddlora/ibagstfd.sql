create table ibagstaf
(
  ibgscode    varchar2(6) default ' ' not null,
  ibgsdesc    varchar2(30) default ' ' not null,
  ibgsactv    number(1,0) default 0 not null,
  ibgsbasc    varchar2(3) default ' ' not null,
  ibgsspar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibagsta1 primary key( 
ibgscode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibagsta2 on ibagstaf
(
ibgsdesc,
ibgscode
)
  tablespace pas_indx; 
create unique index ibagsta3 on ibagstaf
(
ibgsbasc,
ibgscode
)
  tablespace pas_indx; 
