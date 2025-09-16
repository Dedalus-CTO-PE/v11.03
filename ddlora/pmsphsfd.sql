create table pmsphsaf
(
  pmphadmn    varchar2(8) default ' ' not null,
  pmphphos    varchar2(5) default ' ' not null,
  pmphadat    varchar2(8) default ' ' not null,
  pmphddat    varchar2(8) default ' ' not null,
  pmphlday    varchar2(5) default ' ' not null,
  pmphcuid    varchar2(10) default ' ' not null,
  pmphcdat    varchar2(8) default ' ' not null,
  pmphctim    varchar2(8) default ' ' not null,
  pmphuuid    varchar2(10) default ' ' not null,
  pmphudat    varchar2(8) default ' ' not null,
  pmphutim    varchar2(8) default ' ' not null,
  pmphincb    varchar2(1) default ' ' not null,
  pmphincc    varchar2(1) default ' ' not null,
  pmphspar    varchar2(98) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsphsa1 primary key( 
pmphadmn,
pmphadat,
pmphddat,
pmphphos)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
