create table patmsdaf
(
ptmddept    char(3),
ptmddate    char(6),
ptmdprad    decimal(8,0),
ptmdpbad    decimal(8,0),
ptmdtrin    decimal(8,0),
ptmdtout    decimal(8,0),
ptmddsch    decimal(8,0),
ptmdnbdy    decimal(8,0),
ptmdbbdy    decimal(8,0),
ptmddead    decimal(8,0),
ptmdbpra    decimal(8,0),
ptmdbpba    decimal(8,0),
ptmdlvbd    decimal(8,0),
ptmdaead    decimal(8,0),
ptmdobth    decimal(8,0),
ptmdoutt    decimal(8,0),
ptmddays    decimal(2,0),
ptmdpats    decimal(8,0),
ptmdsbdy    decimal(8,0),
ptmdward    char(3),
ptmdspar    char(47),
lf          char(1)
);
create unique index patmsda1 on patmsdaf
(
ptmddept,
ptmdward,
ptmddate
);
create unique index patmsda2 on patmsdaf
(
ptmddate,
ptmddept,
ptmdward
);
revoke all on patmsdaf from public ; 
grant select on patmsdaf to public ; 
