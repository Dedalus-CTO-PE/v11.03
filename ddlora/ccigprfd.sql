create table ccigpraf
(
  dccgptyp    varchar2(3) default ' ' not null,
  ccgpcod1    varchar2(9) default ' ' not null,
  ccgpcod2    varchar2(9) default ' ' not null,
  ccgpcod3    varchar2(9) default ' ' not null,
  ccgpproc    varchar2(7) default ' ' not null,
  ccgpqnty    number(2,0) default 0 not null,
  ccgpspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccigpra1 primary key( 
dccgptyp,
ccgpcod1,
ccgpcod2,
ccgpcod3)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
