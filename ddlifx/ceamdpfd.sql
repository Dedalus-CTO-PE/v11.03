create table ceamdpaf
(
  cemdcod     char(3) default ' ' not null,
  cemdspc     char(3) default ' ' not null,
  cemdpsc     char(7) default ' ' not null,
  cemdqty     decimal(8,2) default 0 not null,
  cemdspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceamdpa1 on ceamdpaf
(
cemdcod,
cemdspc,
cemdpsc
);
revoke all on ceamdpaf from public ; 
grant select on ceamdpaf to public ; 
