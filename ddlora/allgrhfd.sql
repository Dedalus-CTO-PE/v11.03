create table allgrhaf
(
  alghsesn    varchar2(8) default ' ' not null,
  alghhcpc    varchar2(10) default ' ' not null,
  alghspec    varchar2(3) default ' ' not null,
  alghactv    varchar2(1) default ' ' not null,
  alghcdat    varchar2(8) default ' ' not null,
  alghctim    varchar2(8) default ' ' not null,
  alghcuid    varchar2(10) default ' ' not null,
  alghudat    varchar2(8) default ' ' not null,
  alghutim    varchar2(8) default ' ' not null,
  alghuuid    varchar2(10) default ' ' not null,
  alghspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allgrha1 primary key( 
alghsesn,
alghhcpc,
alghspec)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allgrha2 on allgrhaf
(
alghsesn,
alghhcpc,
alghactv,
alghspec
)
  tablespace pas_indx; 
