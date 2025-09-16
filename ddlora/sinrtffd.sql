create table sinrtfaf
(
  sirtpor     varchar2(2) default ' ' not null,
  sirtuni     varchar2(3) default ' ' not null,
  sirtwar     varchar2(5) default ' ' not null,
  sirtcat     varchar2(7) default ' ' not null,
  sirtreq     number(14,2) default 0 not null,
  sirtiss     number(14,2) default 0 not null,
  sirtspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinrtfa1 primary key( 
sirtpor,
sirtuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
