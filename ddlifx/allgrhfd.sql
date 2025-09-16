create table allgrhaf
(
  alghsesn    char(8) default ' ' not null,
  alghhcpc    char(10) default ' ' not null,
  alghspec    char(3) default ' ' not null,
  alghactv    char(1) default ' ' not null,
  alghcdat    char(8) default ' ' not null,
  alghctim    char(8) default ' ' not null,
  alghcuid    char(10) default ' ' not null,
  alghudat    char(8) default ' ' not null,
  alghutim    char(8) default ' ' not null,
  alghuuid    char(10) default ' ' not null,
  alghspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allgrha1 on allgrhaf
(
alghsesn,
alghhcpc,
alghspec
);
create unique index allgrha2 on allgrhaf
(
alghsesn,
alghhcpc,
alghactv,
alghspec
);
revoke all on allgrhaf from public ; 
grant select on allgrhaf to public ; 
