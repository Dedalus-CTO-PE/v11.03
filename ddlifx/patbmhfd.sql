create table patbmhaf
(
ptbhward    char(3),
ptbhdate    char(8),
ptbhoppe    char(3),
ptbhtotp    char(5),
ptbhspar    char(50),
lf          char(1)
);
create unique index patbmha1 on patbmhaf
(
ptbhward,
ptbhdate,
ptbhoppe
);
revoke all on patbmhaf from public ; 
grant select on patbmhaf to public ; 
