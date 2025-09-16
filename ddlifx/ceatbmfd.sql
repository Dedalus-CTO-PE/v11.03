create table ceatbmaf
(
  cetbmbs     char(9) default ' ' not null,
  cetbspc     char(3) default ' ' not null,
  cetbpsc     char(7) default ' ' not null,
  cetbpqty    decimal(8,2) default 0 not null,
  cetbsqty    decimal(8,2) default 0 not null,
  cetbspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceatbma1 on ceatbmaf
(
cetbmbs,
cetbspc,
cetbpsc
);
revoke all on ceatbmaf from public ; 
grant select on ceatbmaf to public ; 
