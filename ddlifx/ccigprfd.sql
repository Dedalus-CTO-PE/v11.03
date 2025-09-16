create table ccigpraf
(
  dccgptyp    char(3) default ' ' not null,
  ccgpcod1    char(9) default ' ' not null,
  ccgpcod2    char(9) default ' ' not null,
  ccgpcod3    char(9) default ' ' not null,
  ccgpproc    char(7) default ' ' not null,
  ccgpqnty    decimal(2,0) default 0 not null,
  ccgpspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccigpra1 on ccigpraf
(
dccgptyp,
ccgpcod1,
ccgpcod2,
ccgpcod3
);
revoke all on ccigpraf from public ; 
grant select on ccigpraf to public ; 
