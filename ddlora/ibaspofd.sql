create table ibaspolf
(
  cspname     varchar2(8) default ' ' not null,
  cspdate     varchar2(8) default ' ' not null,
  csptime     varchar2(8) default ' ' not null,
  cspdesc     varchar2(30) default ' ' not null,
  cspoper     varchar2(4) default ' ' not null,
  cspleve     varchar2(1) default ' ' not null,
  cspdept     varchar2(3) default ' ' not null,
  cspxtra     varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaspol1 primary key( 
cspname)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibaspol2 on ibaspolf
(
cspdept,
cspname
)
  tablespace pas_indx; 
create unique index ibaspol3 on ibaspolf
(
cspdept,
cspdate,
csptime,
cspname
)
  tablespace pas_indx; 
