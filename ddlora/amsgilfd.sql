create table amsgilaf
(
  amgigic     varchar2(5) default ' ' not null,
  amgides     varchar2(35) default ' ' not null,
  amgidis     varchar2(5) default ' ' not null,
  amgires     varchar2(4) default ' ' not null,
  amgiled     varchar2(2) default ' ' not null,
  amgiadp     varchar2(12) default ' ' not null,
  amgiedp     varchar2(12) default ' ' not null,
  amgicap     varchar2(12) default ' ' not null,
  amgilos     varchar2(12) default ' ' not null,
  amgipro     varchar2(12) default ' ' not null,
  amgirvr     varchar2(12) default ' ' not null,
  amgiret     varchar2(12) default ' ' not null,
  amgisal     varchar2(12) default ' ' not null,
  amgiud1     varchar2(8) default ' ' not null,
  amgiud2     varchar2(8) default ' ' not null,
  amgiuy1     varchar2(1) default ' ' not null,
  amgiuy2     varchar2(1) default ' ' not null,
  amgispa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsgila1 primary key( 
amgigic)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
