create table pmspdpaf
(
pmpdadmn    char(8),
pmpddate    char(8),
pmpdshif    char(1),
pmpdward    char(3),
pmpdscor    decimal(3,0),
pmpdcate    char(1),
pmpdclos    char(1),
pmpdspar    char(29),
lf          char(1)
);
create unique index pmspdpa1 on pmspdpaf
(
pmpdadmn,
pmpddate,
pmpdshif
);
create unique index pmspdpa2 on pmspdpaf
(
pmpdward,
pmpddate,
pmpdshif,
pmpdadmn
);
revoke all on pmspdpaf from public ; 
grant select on pmspdpaf to public ; 
