create table patlueaf
(
ptluoper    char(4),
ptluurno    char(8),
lf          char(1)
);
create unique index patluea1 on patlueaf
(
ptluoper
);
revoke all on patlueaf from public ; 
grant select on patlueaf to public ; 
