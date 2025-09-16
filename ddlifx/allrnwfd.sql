create table allrnwaf
(
  alrnvisn    char(8) default ' ' not null,
  alrnrdat    char(8) default ' ' not null,
  alrnrtim    char(8) default ' ' not null,
  alrnruid    char(10) default ' ' not null,
  alrnorty    char(3) default ' ' not null,
  alrnoxdt    char(8) default ' ' not null,
  alrnordt    char(8) default ' ' not null,
  alrnnrty    char(3) default ' ' not null,
  alrnnxdt    char(8) default ' ' not null,
  alrnnrdt    char(8) default ' ' not null,
  alrnstat    char(1) default ' ' not null,
  alrnrrdt    char(8) default ' ' not null,
  alrnrrtm    char(8) default ' ' not null,
  alrnrrid    char(10) default ' ' not null,
  alrnddat    char(8) default ' ' not null,
  alrndtim    char(8) default ' ' not null,
  alrnduid    char(10) default ' ' not null,
  alrncdat    char(8) default ' ' not null,
  alrnctim    char(8) default ' ' not null,
  alrncuid    char(10) default ' ' not null,
  alrnudat    char(8) default ' ' not null,
  alrnutim    char(8) default ' ' not null,
  alrnuuid    char(10) default ' ' not null,
  alrnores    char(10) default ' ' not null,
  alrnnres    char(10) default ' ' not null,
  alrnorhc    char(10) default ' ' not null,
  alrnorhp    char(10) default ' ' not null,
  alrnnrhc    char(10) default ' ' not null,
  alrnnrhp    char(10) default ' ' not null,
  alrnspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index allrnwa1 on allrnwaf
(
alrnvisn,
alrnrdat,
alrnrtim
);
revoke all on allrnwaf from public ; 
grant select on allrnwaf to public ; 
