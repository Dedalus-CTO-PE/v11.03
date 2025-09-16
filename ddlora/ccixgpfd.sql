create table ccixgpaf
(
  ccxpprid    varchar2(8) default ' ' not null,
  ccxpscid    varchar2(2) default ' ' not null,
  ccxpuniq    varchar2(3) default ' ' not null,
  ccxpcod1    varchar2(9) default ' ' not null,
  ccxpcod2    varchar2(9) default ' ' not null,
  ccxpcod3    varchar2(9) default ' ' not null,
  ccxpcod4    varchar2(9) default ' ' not null,
  ccxpproc    varchar2(7) default ' ' not null,
  ccxpqnty    number(3,0) default 0 not null,
  ccxpspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccixgpa1 primary key( 
ccxpprid,
ccxpscid,
ccxpuniq,
ccxpcod1,
ccxpcod2,
ccxpcod3,
ccxpcod4)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
