create table apsinpaf
(
  apinbch     varchar2(5) default ' ' not null,
  apincrd     varchar2(5) default ' ' not null,
  apinref     varchar2(15) default ' ' not null,
  apindoc     varchar2(15) default ' ' not null,
  apinord     varchar2(8) default ' ' not null,
  apinlin     varchar2(3) default ' ' not null,
  apinupd     varchar2(1) default ' ' not null,
  apinled     varchar2(2) default ' ' not null,
  apinacc     varchar2(12) default ' ' not null,
  apindis     varchar2(5) default ' ' not null,
  apinres     varchar2(4) default ' ' not null,
  apincat     varchar2(7) default ' ' not null,
  apindes     varchar2(35) default ' ' not null,
  apinqty     number(12,2) default 0 not null,
  apinuct     number(16,4) default 0 not null,
  apinamt     number(14,2) default 0 not null,
  apinpay     number(14,2) default 0 not null,
  apingst     number(14,2) default 0 not null,
  apincgs     varchar2(6) default ' ' not null,
  apinpayg    varchar2(1) default ' ' not null,
  apinbasc    varchar2(3) default ' ' not null,
  apinspa     varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsinpa1 primary key( 
apinbch,
apincrd,
apinref,
apindoc,
apinord,
apinlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsinpa2 on apsinpaf
(
apincrd,
apinord,
apinref,
apindoc,
apinbch,
apinlin
)
  tablespace pas_indx; 
