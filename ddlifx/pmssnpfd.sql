create table pmssnpaf
(
  pmsnclcd    char(3) default ' ' not null,
  pmsnvers    char(2) default ' ' not null,
  pmsndesc    char(50) default ' ' not null,
  pmsnetyp    char(1) default ' ' not null,
  pmsnactv    char(1) default ' ' not null,
  pmsndact    char(8) default ' ' not null,
  pmsndiac    char(8) default ' ' not null,
  pmsncuid    char(10) default ' ' not null,
  pmsncdat    char(8) default ' ' not null,
  pmsnctim    char(8) default ' ' not null,
  pmsnuuid    char(10) default ' ' not null,
  pmsnudat    char(8) default ' ' not null,
  pmsnutim    char(8) default ' ' not null,
  pmsnhdpe    char(4) default ' ' not null,
  pmsnhcpe    char(4) default ' ' not null,
  pmsnanse    char(3) default ' ' not null,
  pmsnspar    char(39) default ' ' not null,
  lf          char(1)
);
create unique index pmssnpa1 on pmssnpaf
(
pmsnclcd,
pmsnvers
);
revoke all on pmssnpaf from public ; 
grant select on pmssnpaf to public ; 
