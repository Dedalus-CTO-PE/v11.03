create table patrgmaf
(
ptrgadmn    char(8),
ptrgregm    char(10),
ptrgcntr    char(2),
ptrgcuid    char(10),
ptrgcdat    char(10),
ptrgctim    char(8),
ptrgspar    char(50),
lf          char(1)
);
create unique index patrgma1 on patrgmaf
(
ptrgadmn,
ptrgcntr
);
create unique index patrgma2 on patrgmaf
(
ptrgadmn,
ptrgregm,
ptrgcntr
);
revoke all on patrgmaf from public ; 
grant select on patrgmaf to public ; 
