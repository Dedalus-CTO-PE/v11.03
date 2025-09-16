create table allrnwaf
(
  alrnvisn    varchar2(8) default ' ' not null,
  alrnrdat    varchar2(8) default ' ' not null,
  alrnrtim    varchar2(8) default ' ' not null,
  alrnruid    varchar2(10) default ' ' not null,
  alrnorty    varchar2(3) default ' ' not null,
  alrnoxdt    varchar2(8) default ' ' not null,
  alrnordt    varchar2(8) default ' ' not null,
  alrnnrty    varchar2(3) default ' ' not null,
  alrnnxdt    varchar2(8) default ' ' not null,
  alrnnrdt    varchar2(8) default ' ' not null,
  alrnstat    varchar2(1) default ' ' not null,
  alrnrrdt    varchar2(8) default ' ' not null,
  alrnrrtm    varchar2(8) default ' ' not null,
  alrnrrid    varchar2(10) default ' ' not null,
  alrnddat    varchar2(8) default ' ' not null,
  alrndtim    varchar2(8) default ' ' not null,
  alrnduid    varchar2(10) default ' ' not null,
  alrncdat    varchar2(8) default ' ' not null,
  alrnctim    varchar2(8) default ' ' not null,
  alrncuid    varchar2(10) default ' ' not null,
  alrnudat    varchar2(8) default ' ' not null,
  alrnutim    varchar2(8) default ' ' not null,
  alrnuuid    varchar2(10) default ' ' not null,
  alrnores    varchar2(10) default ' ' not null,
  alrnnres    varchar2(10) default ' ' not null,
  alrnorhc    varchar2(10) default ' ' not null,
  alrnorhp    varchar2(10) default ' ' not null,
  alrnnrhc    varchar2(10) default ' ' not null,
  alrnnrhp    varchar2(10) default ' ' not null,
  alrnspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allrnwa1 primary key( 
alrnvisn,
alrnrdat,
alrnrtim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
