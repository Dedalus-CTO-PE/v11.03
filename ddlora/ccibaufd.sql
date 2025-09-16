create table ccibauaf
(
  dccbabat    varchar2(8) default ' ' not null,
  ccbadate    varchar2(8) default ' ' not null,
  ccbaoper    varchar2(4) default ' ' not null,
  ccbatrxt    number(1,0) default 0 not null,
  ccbaevnt    varchar2(8) default ' ' not null,
  ccbaproc    varchar2(7) default ' ' not null,
  ccbaurno    varchar2(8) default ' ' not null,
  ccbaptyp    varchar2(3) default ' ' not null,
  ccbaqnty    number(8,0) default 0 not null,
  ccbaordd    varchar2(6) default ' ' not null,
  ccbaserv    varchar2(1) default ' ' not null,
  ccbaspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccibaua1 primary key( 
dccbabat,
ccbadate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
