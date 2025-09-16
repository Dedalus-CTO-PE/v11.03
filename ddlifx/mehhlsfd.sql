create table mehaudha
(
  mhhlmdat    char(8) default ' ' not null,
  mhhlmtim    char(8) default ' ' not null,
  mhhlrtyp    char(1) default ' ' not null,
  mhhlmuid    char(10) default ' ' not null,
  mhhlurno    char(8) default ' ' not null,
  mhhluniq    char(8) default ' ' not null,
  mhhlsdat    char(8) default ' ' not null,
  mhhlstim    char(8) default ' ' not null,
  mhhledat    char(8) default ' ' not null,
  mhhletim    char(8) default ' ' not null,
  mhhlstat    char(1) default ' ' not null,
  mhhlcurr    char(1) default ' ' not null,
  mhhlsref    char(3) default ' ' not null,
  mhhlorcd    char(6) default ' ' not null,
  mhhlhcpc    char(10) default ' ' not null,
  mhhlrnam    char(20) default ' ' not null,
  mhhlrad1    char(35) default ' ' not null,
  mhhlrad2    char(35) default ' ' not null,
  mhhlrad3    char(35) default ' ' not null,
  mhhlrad4    char(35) default ' ' not null,
  mhhlrpos    char(8) default ' ' not null,
  mhhlrtel    char(20) default ' ' not null,
  mhhllawy    char(6) default ' ' not null,
  mhhlpris    char(1) default ' ' not null,
  mhhlesdt    char(8) default ' ' not null,
  mhhlcuid    char(10) default ' ' not null,
  mhhlcdat    char(8) default ' ' not null,
  mhhlctim    char(8) default ' ' not null,
  mhhluuid    char(10) default ' ' not null,
  mhhludat    char(8) default ' ' not null,
  mhhlutim    char(8) default ' ' not null,
  mhhlrscl    char(10) default ' ' not null,
  mhhlcstm    char(10) default ' ' not null,
  mhhlduao    char(10) default ' ' not null,
  mhhlkwrk    char(10) default ' ' not null,
  mhhllawt    char(50) default ' ' not null,
  mhhludfl    char(1) default ' ' not null,
  mhhluddt    char(8) default ' ' not null,
  mhhlcomm    char(100) default ' ' not null,
  mhhlrodt    char(8) default ' ' not null,
  mhhlrotm    char(8) default ' ' not null,
  mhhlamdt    char(8) default ' ' not null,
  mhhlamtm    char(8) default ' ' not null,
  mhhloref    char(3) default ' ' not null,
  mhhlrcli    char(10) default ' ' not null,
  mhhlrclr    char(3) default ' ' not null,
  mhhlrdhb    char(3) default ' ' not null,
  mhhlspar    char(49) default ' ' not null,
  lf          char(1)
);
create index mehaudha on mehaudha
(
,
mhhlmdat,
mhhlmtim
);
revoke all on mehaudha from public ; 
grant select on mehaudha to public ; 
create table mehhlsaf
(
  mhhlurno    char(8) default ' ' not null,
  mhhluniq    char(8) default ' ' not null,
  mhhlsdat    char(8) default ' ' not null,
  mhhlstim    char(8) default ' ' not null,
  mhhledat    char(8) default ' ' not null,
  mhhletim    char(8) default ' ' not null,
  mhhlstat    char(1) default ' ' not null,
  mhhlcurr    char(1) default ' ' not null,
  mhhlsref    char(3) default ' ' not null,
  mhhlorcd    char(6) default ' ' not null,
  mhhlhcpc    char(10) default ' ' not null,
  mhhlrnam    char(20) default ' ' not null,
  mhhlrad1    char(35) default ' ' not null,
  mhhlrad2    char(35) default ' ' not null,
  mhhlrad3    char(35) default ' ' not null,
  mhhlrad4    char(35) default ' ' not null,
  mhhlrpos    char(8) default ' ' not null,
  mhhlrtel    char(20) default ' ' not null,
  mhhllawy    char(6) default ' ' not null,
  mhhlpris    char(1) default ' ' not null,
  mhhlesdt    char(8) default ' ' not null,
  mhhlcuid    char(10) default ' ' not null,
  mhhlcdat    char(8) default ' ' not null,
  mhhlctim    char(8) default ' ' not null,
  mhhluuid    char(10) default ' ' not null,
  mhhludat    char(8) default ' ' not null,
  mhhlutim    char(8) default ' ' not null,
  mhhlrscl    char(10) default ' ' not null,
  mhhlcstm    char(10) default ' ' not null,
  mhhlduao    char(10) default ' ' not null,
  mhhlkwrk    char(10) default ' ' not null,
  mhhllawt    char(50) default ' ' not null,
  mhhludfl    char(1) default ' ' not null,
  mhhluddt    char(8) default ' ' not null,
  mhhlcomm    char(100) default ' ' not null,
  mhhlrodt    char(8) default ' ' not null,
  mhhlrotm    char(8) default ' ' not null,
  mhhlamdt    char(8) default ' ' not null,
  mhhlamtm    char(8) default ' ' not null,
  mhhloref    char(3) default ' ' not null,
  mhhlrcli    char(10) default ' ' not null,
  mhhlrclr    char(3) default ' ' not null,
  mhhlrdhb    char(3) default ' ' not null,
  mhhlspar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index mehhlsa1 on mehhlsaf
(
mhhlurno,
mhhluniq
);
create unique index mehhlsa2 on mehhlsaf
(
mhhlurno,
mhhlsdat,
mhhlstim,
mhhluniq
);
revoke all on mehhlsaf from public ; 
grant select on mehhlsaf to public ; 
