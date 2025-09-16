create table ccspgpaf
(
  ccpghcd     char(2) default ' ' not null,
  ccpgdpt     char(8) default ' ' not null,
  ccpggcd     char(4) default ' ' not null,
  ccpgdes     char(35) default ' ' not null,
  ccpgdsc     decimal(16,4) default 0 not null,
  ccpgspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccspgpa1 on ccspgpaf
(
ccpghcd,
ccpgdpt,
ccpggcd
);
revoke all on ccspgpaf from public ; 
grant select on ccspgpaf to public ; 
