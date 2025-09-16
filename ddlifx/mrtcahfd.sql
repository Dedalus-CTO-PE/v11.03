create table mrtcahaf
(
  mrchadmn    char(8) default ' ' not null,
  mrchadat    char(8) default ' ' not null,
  mrchatim    char(8) default ' ' not null,
  mrchwebu    char(10) default ' ' not null,
  mrchndrg    char(4) default ' ' not null,
  mrchdrgv    char(3) default ' ' not null,
  mrchhdrg    char(4) default ' ' not null,
  mrchhdgv    char(3) default ' ' not null,
  mrchnwau    char(17) default ' ' not null,
  mrchicdv    char(5) default ' ' not null,
  mrchpdcd    char(9) default ' ' not null,
  mrchppcd    char(9) default ' ' not null,
  mrchspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index mrtcaha1 on mrtcahaf
(
mrchadmn,
mrchadat,
mrchatim
);
revoke all on mrtcahaf from public ; 
grant select on mrtcahaf to public ; 
