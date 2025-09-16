create table sinbataf
(
  sibtpon     varchar2(7) default ' ' not null,
  sibtreq     varchar2(8) default ' ' not null,
  sibtcst     varchar2(5) default ' ' not null,
  sibtqty     number(12,2) default 0 not null,
  sibtiss     number(12,2) default 0 not null,
  sibtspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinbata1 primary key( 
sibtpon,
sibtreq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
