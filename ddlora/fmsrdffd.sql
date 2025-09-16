create table fmsrdfaf
(
  fmrdcod     varchar2(3) default ' ' not null,
  fmrddes     varchar2(35) default ' ' not null,
  fmrdled     varchar2(2) default ' ' not null,
  fmrdrep     varchar2(2) default ' ' not null,
  fmrdrs      varchar2(3) default ' ' not null,
  fmrdpt      varchar2(2) default ' ' not null,
  fmrdlev     varchar2(3) default ' ' not null,
  fmrdfpr     varchar2(5) default ' ' not null,
  fmrdtpr     varchar2(5) default ' ' not null,
  fmrdcas     number(1,0) default 0 not null,
  fmrdcbt     varchar2(4) default ' ' not null,
  fmrdpbt     varchar2(4) default ' ' not null,
  fmrddop     number(1,0) default 0 not null,
  fmrdzer     number(1,0) default 0 not null,
  fmrdprj     number(1,0) default 0 not null,
  fmrdstat    number(1,0) default 0 not null,
  fmrdsupp    varchar2(1) default ' ' not null,
  fmrdshed    varchar2(1) default ' ' not null,
  fmrdcrin    varchar2(1) default ' ' not null,
  fmrdspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsrdfa1 primary key( 
fmrdcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
