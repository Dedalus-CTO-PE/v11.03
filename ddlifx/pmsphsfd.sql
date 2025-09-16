create table pmsphsaf
(
  pmphadmn    char(8) default ' ' not null,
  pmphphos    char(5) default ' ' not null,
  pmphadat    char(8) default ' ' not null,
  pmphddat    char(8) default ' ' not null,
  pmphlday    char(5) default ' ' not null,
  pmphcuid    char(10) default ' ' not null,
  pmphcdat    char(8) default ' ' not null,
  pmphctim    char(8) default ' ' not null,
  pmphuuid    char(10) default ' ' not null,
  pmphudat    char(8) default ' ' not null,
  pmphutim    char(8) default ' ' not null,
  pmphincb    char(1) default ' ' not null,
  pmphincc    char(1) default ' ' not null,
  pmphspar    char(98) default ' ' not null,
  lf          char(1)
);
create unique index pmsphsa1 on pmsphsaf
(
pmphadmn,
pmphadat,
pmphddat,
pmphphos
);
revoke all on pmsphsaf from public ; 
grant select on pmsphsaf to public ; 
