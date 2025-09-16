create table apsinpaf
(
  apinbch     char(5) default ' ' not null,
  apincrd     char(5) default ' ' not null,
  apinref     char(15) default ' ' not null,
  apindoc     char(15) default ' ' not null,
  apinord     char(8) default ' ' not null,
  apinlin     char(3) default ' ' not null,
  apinupd     char(1) default ' ' not null,
  apinled     char(2) default ' ' not null,
  apinacc     char(12) default ' ' not null,
  apindis     char(5) default ' ' not null,
  apinres     char(4) default ' ' not null,
  apincat     char(7) default ' ' not null,
  apindes     char(35) default ' ' not null,
  apinqty     decimal(12,2) default 0 not null,
  apinuct     decimal(16,4) default 0 not null,
  apinamt     decimal(14,2) default 0 not null,
  apinpay     decimal(14,2) default 0 not null,
  apingst     decimal(14,2) default 0 not null,
  apincgs     char(6) default ' ' not null,
  apinpayg    char(1) default ' ' not null,
  apinbasc    char(3) default ' ' not null,
  apinspa     char(7) default ' ' not null,
  lf          char(1)
);
create unique index apsinpa1 on apsinpaf
(
apinbch,
apincrd,
apinref,
apindoc,
apinord,
apinlin
);
create unique index apsinpa2 on apsinpaf
(
apincrd,
apinord,
apinref,
apindoc,
apinbch,
apinlin
);
revoke all on apsinpaf from public ; 
grant select on apsinpaf to public ; 
