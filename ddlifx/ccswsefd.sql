create table ccswseaf
(
  ccwseid     char(4) default ' ' not null,
  ccwswpc     char(10) default ' ' not null,
  ccwsslv     char(1) default ' ' not null,
  ccwsscd     char(10) default ' ' not null,
  ccwstem     char(3) default ' ' not null,
  ccwsspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index ccswsea1 on ccswseaf
(
ccwseid,
ccwswpc
);
create unique index ccswsea2 on ccswseaf
(
ccwswpc,
ccwseid
);
revoke all on ccswseaf from public ; 
grant select on ccswseaf to public ; 
