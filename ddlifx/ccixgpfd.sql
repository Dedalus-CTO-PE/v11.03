create table ccixgpaf
(
  ccxpprid    char(8) default ' ' not null,
  ccxpscid    char(2) default ' ' not null,
  ccxpuniq    char(3) default ' ' not null,
  ccxpcod1    char(9) default ' ' not null,
  ccxpcod2    char(9) default ' ' not null,
  ccxpcod3    char(9) default ' ' not null,
  ccxpcod4    char(9) default ' ' not null,
  ccxpproc    char(7) default ' ' not null,
  ccxpqnty    decimal(3,0) default 0 not null,
  ccxpspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccixgpa1 on ccixgpaf
(
ccxpprid,
ccxpscid,
ccxpuniq,
ccxpcod1,
ccxpcod2,
ccxpcod3,
ccxpcod4
);
revoke all on ccixgpaf from public ; 
grant select on ccixgpaf to public ; 
