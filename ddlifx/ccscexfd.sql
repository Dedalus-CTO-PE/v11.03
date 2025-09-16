create table ccscexaf
(
  ccexeid     char(4) default ' ' not null,
  ccexr01     char(3) default ' ' not null,
  ccexf01     char(10) default ' ' not null,
  ccext01     char(10) default ' ' not null,
  ccexr02     char(3) default ' ' not null,
  ccexf02     char(10) default ' ' not null,
  ccext02     char(10) default ' ' not null,
  ccexr03     char(3) default ' ' not null,
  ccexf03     char(10) default ' ' not null,
  ccext03     char(10) default ' ' not null,
  ccexr04     char(3) default ' ' not null,
  ccexf04     char(10) default ' ' not null,
  ccext04     char(10) default ' ' not null,
  ccexr05     char(3) default ' ' not null,
  ccexf05     char(10) default ' ' not null,
  ccext05     char(10) default ' ' not null,
  ccexr06     char(3) default ' ' not null,
  ccexf06     char(10) default ' ' not null,
  ccext06     char(10) default ' ' not null,
  ccexr07     char(3) default ' ' not null,
  ccexf07     char(10) default ' ' not null,
  ccext07     char(10) default ' ' not null,
  ccexr08     char(3) default ' ' not null,
  ccexf08     char(10) default ' ' not null,
  ccext08     char(10) default ' ' not null,
  ccexr09     char(3) default ' ' not null,
  ccexf09     char(10) default ' ' not null,
  ccext09     char(10) default ' ' not null,
  ccexr10     char(3) default ' ' not null,
  ccexf10     char(10) default ' ' not null,
  ccext10     char(10) default ' ' not null,
  ccexr11     char(3) default ' ' not null,
  ccexf11     char(10) default ' ' not null,
  ccext11     char(10) default ' ' not null,
  ccexr12     char(3) default ' ' not null,
  ccexf12     char(10) default ' ' not null,
  ccext12     char(10) default ' ' not null,
  ccexr13     char(3) default ' ' not null,
  ccexf13     char(10) default ' ' not null,
  ccext13     char(10) default ' ' not null,
  ccexr14     char(3) default ' ' not null,
  ccexf14     char(10) default ' ' not null,
  ccext14     char(10) default ' ' not null,
  ccexspa     char(23) default ' ' not null,
  lf          char(1)
);
create unique index ccscexa1 on ccscexaf
(
ccexeid
);
revoke all on ccscexaf from public ; 
grant select on ccscexaf to public ; 
